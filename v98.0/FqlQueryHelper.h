/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FqlQueryHelper : NSObject
+(id)usersMultiQueryWhereUsers:(id)arg1 whereProfiles:(id)arg2 shouldFetchIsEmployee:(BOOL)arg3 ;
+(id)whereClauseForThreadListType:(long long)arg1 specifyArchive:(BOOL)arg2 ;
+(id)threadsMultiQuery:(id)arg1 order:(id)arg2 limit:(int)arg3 useSync:(BOOL)arg4 shouldQueryUserInfo:(BOOL)arg5 threadListType:(long long)arg6 ;
+(id)singleThreadMultiQuery:(id)arg1 shouldQueryUserInfo:(BOOL)arg2 ;
+(id)messagesQueryWhere:(id)arg1 order:(id)arg2 limit:(unsigned long long)arg3 useSync:(BOOL)arg4 ;
+(id)actionsQueryWhere:(id)arg1 order:(id)arg2 limit:(unsigned long long)arg3 ;
+(id)usersMultiQueryWhereUsers:(id)arg1 whereProfiles:(id)arg2 ;
@end

