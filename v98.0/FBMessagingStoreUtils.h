/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBMessagingStoreUtils : NSObject
+(id)threadSummaryFromRow:(id)arg1 ;
+(id)pinnedGroupInfoFromRow:(id)arg1 ;
+(NSNumber*)timestampFromRow:(id)arg1 ;
+(id)parameterListForRestoreThreadListOfFolderType:(long long)arg1 allowArchivedThreads:(BOOL)arg2 minTimestamp:(unsigned long long)arg3 maxTimestamp:(unsigned long long)arg4 limit:(long long)arg5 ;
+(id)coreMessagePropertiesFromRow:(id)arg1 ;
+(id)extensiblePropertiesRawDataRowsFromQueryResult:(id)arg1 ;
+(id)parameterListForRestoreOldestThreadTimestampOfFolderType:(long long)arg1 allowArchivedThreads:(BOOL)arg2 minTimestamp:(unsigned long long)arg3 ;
+(id)_userIDFromRow:(id)arg1 ;
+(id)userIDFromParticipantRow:(id)arg1 ;
+(id)userFromRow:(id)arg1 ;
+(id)fetchedThreadKeysFromRow:(id)arg1 ;
@end

