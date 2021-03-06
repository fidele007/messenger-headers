/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadMarkRunnerAction, FBMSyncedThreadKey, MNThreadSimpleGraphRunnerAction, MNThreadCustomizationRunnerAction, MNSecureThreadSummaryUpdate, MNThreadGraphQLMutationRunnerAction;

@interface MNThreadRunnableClientUpdate : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNThreadMarkRunnerAction* _mark_action;
	FBMSyncedThreadKey* _mark_threadKey;
	MNThreadSimpleGraphRunnerAction* _graphRunnerAction;
	MNThreadCustomizationRunnerAction* _customization_action;
	FBMSyncedThreadKey* _customization_threadKey;
	MNSecureThreadSummaryUpdate* _secureThreadUpdate;
	MNThreadGraphQLMutationRunnerAction* _graphQLMutationRunnerAction;

}
+(id)graphRunnerAction:(id)arg1 ;
+(id)markWithAction:(id)arg1 threadKey:(id)arg2 ;
+(id)secureThreadUpdate:(id)arg1 ;
+(id)customizationWithAction:(id)arg1 threadKey:(id)arg2 ;
+(id)graphQLMutationRunnerAction:(id)arg1 ;
-(void)matchMark:(/*^block*/id)arg1 graphRunnerAction:(/*^block*/id)arg2 customization:(/*^block*/id)arg3 secureThreadUpdate:(/*^block*/id)arg4 graphQLMutationRunnerAction:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

