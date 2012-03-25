/*
 * =====================================================================================
 *
 *       Filename:  TopicDataLoader.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/27/2011 10:40:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xing Zhou (GGLouis), zhoux.chn@gmail.com
 *        Company:  Biff Networking.Inc
 *
 * =====================================================================================
 */
#ifndef TOPIC_DATA_LOADER
#define TOPIC_DATA_LOADER
#include<map>
#include<string>
using namespace std;
class TopicDataLoader
{
	public:
		TopicDataLoader();
		bool load(const string&);
		
	private:
		vector<map<string, double>*>;
};
#endif
