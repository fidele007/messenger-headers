/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBURLRequestPriorityHandle : NSObject {

	/*^block*/id _callback;
	mutex _mutex;
	long long _priority;

}

@property (assign,nonatomic) long long priority; 
-(void)unregisterPriorityCallback;
-(long long)initialPriorityWithPriorityCallback:(/*^block*/id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
@end
