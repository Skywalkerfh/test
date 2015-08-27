// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <vector>
#include<iostream>

using namespace::std;

int _tmain(int argc, _TCHAR* argv[])
{
	int target = 0;
	vector<int> nums;
	nums.clear();
	nums.push_back(0);
	nums.push_back(4);
	nums.push_back(3);
	nums.push_back(0);
	int index1;
	int index2;
	int max = -9999;
	int min = 9999;
	vector<int> ans;
	vector<vector<int>> hashmap;
	   
	for(int k=0;k<nums.size();k++){
		if(nums[k]>max){
			max = nums[k];
		}
		if (nums[k]<min){
			min = nums[k];
		}
	}
	int size = 2*(max-min);
	hashmap.resize(size);  
	for (int i = 0; i < nums.size(); i++)
	{
		if ((target-nums[i])-min>=0)
		{
			hashmap[(target-nums[i])-min].push_back(i+1);
		}

	}
	for (int j = 0; j < nums.size(); j++)
	{
		if(hashmap[nums[j]-min].size() != 0){
			if (hashmap[nums[j]-min][0]== j+1 && hashmap[nums[j]-min].size()>1)
			{
				index1 = j+1;
		        index2 = hashmap[nums[j]-min][1];
		        break;
			}
			else if(hashmap[nums[j]-min][0]== j+1){
				continue;
			}
		index1 = j+1;
		index2 = hashmap[nums[j]-min][0];
		break;
		}
	}
	ans.push_back(index1);
	ans.push_back(index2);
	cout<<index1<<endl;
	cout<<index2<<endl;
	system("pause");
	
}

