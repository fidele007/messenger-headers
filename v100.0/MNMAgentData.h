/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMThreadKey, MNMAgentDataContent;

@interface MNMAgentData : FBValueObject <NSCoding, NSCopying> {

	NSString* _dataId;
	long long _agentType;
	FBMThreadKey* _threadKey;
	NSString* _messageId;
	MNMAgentDataContent* _content;
	double _confidence;

}

@property (nonatomic,copy,readonly) NSString * dataId;                          //@synthesize dataId=_dataId - In the implementation block
@property (nonatomic,readonly) long long agentType;                             //@synthesize agentType=_agentType - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                   //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;                       //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) MNMAgentDataContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) double confidence;                               //@synthesize confidence=_confidence - In the implementation block
-(id)initWithDataId:(id)arg1 agentType:(long long)arg2 threadKey:(id)arg3 messageId:(id)arg4 content:(id)arg5 confidence:(double)arg6 ;
-(NSString *)dataId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNMAgentDataContent *)content;
-(double)confidence;
-(FBMThreadKey *)threadKey;
-(long long)agentType;
-(NSString *)messageId;
@end

