/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundTaskCompleting.h>

@class NSString;

@interface FBBackgroundTaskCompleter : NSObject <FBBackgroundTaskCompleting> {

	/*^block*/id _callback;
	NSString* _name;
	BOOL _didCallBlock;
	BOOL _didExpire;

}

@property (assign) BOOL didCallBlock;                               //@synthesize didCallBlock=_didCallBlock - In the implementation block
@property (assign) BOOL didExpire;                                  //@synthesize didExpire=_didExpire - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCompleteBackgroundTask;
-(void)setDidCallBlock:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)didCallBlock;
-(BOOL)didExpire;
-(void)setDidExpire:(BOOL)arg1 ;
-(void)dealloc;
@end
