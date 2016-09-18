/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>

@protocol MNWifiWatcherDelegate;
@class NSString;

@interface MNWifiWatcher : NSObject <FBReachabilityListener> {

	NSString* _currentBSSID;
	id<MNWifiWatcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNWifiWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)setDelegate:(id<MNWifiWatcherDelegate>)arg1 ;
-(id<MNWifiWatcherDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)startWatching;
-(void)stopWatching;
@end
