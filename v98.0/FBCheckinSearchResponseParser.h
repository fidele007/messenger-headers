/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCheckinSearchResponseParser : NSObject
+(id)parseLifeEventQueryResponse:(id)arg1 location:(id)arg2 queryString:(id)arg3 searchType:(long long)arg4 error:(id*)arg5 ;
+(id)parseCheckinSearchQueryResponse:(id)arg1 location:(id)arg2 queryString:(id)arg3 searchType:(long long)arg4 error:(id*)arg5 ;
+(void)_logDebugInfoForEmptyResponseWithRawResponse:(id)arg1 parsedResponse:(id)arg2 queryString:(id)arg3 searchType:(long long)arg4 tracking:(id)arg5 parseError:(id)arg6 ;
+(void)_parseFBCheckinSearchQuery:(id)arg1 searchType:(long long)arg2 location:(id)arg3 dataSet:(id)arg4 ;
@end
