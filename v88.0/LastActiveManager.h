/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBClock;
@class NSString;

@interface LastActiveManager : NSObject <FBClassProvidable> {

	id<FBClock> _clock;

}

@property (nonatomic,retain) id<FBClock> clock;                     //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)DEPRECATED_combinedLastActiveTimeFromUserLastActiveTime:(long long)arg1 userId:(id)arg2 isOnline:(BOOL)arg3 ;
-(double)secondsAgo:(long long)arg1 ;
-(id)initWithClock:(id)arg1 ;
-(long long)DEPRECATED_lastActiveTimeForSyncPerson:(id)arg1 ;
-(double)timeIntervalSinceLastActive:(long long)arg1 ;
-(id<FBClock>)clock;
-(void)setClock:(id<FBClock>)arg1 ;
@end
