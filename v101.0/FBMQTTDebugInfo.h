/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface FBMQTTDebugInfo : NSObject {

	NSDictionary* _connectionDebugInfo;
	NSArray* _subscribedTopics;
	NSArray* _suspendedTopics;

}

@property (nonatomic,copy,readonly) NSDictionary * connectionDebugInfo;              //@synthesize connectionDebugInfo=_connectionDebugInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subscribedTopics;                      //@synthesize subscribedTopics=_subscribedTopics - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suspendedTopics;                       //@synthesize suspendedTopics=_suspendedTopics - In the implementation block
-(NSDictionary *)connectionDebugInfo;
-(id)initWithConnectionDebugInfo:(id)arg1 subscribedTopics:(id)arg2 suspendedTopics:(id)arg3 ;
-(NSArray *)subscribedTopics;
-(NSArray *)suspendedTopics;
@end

