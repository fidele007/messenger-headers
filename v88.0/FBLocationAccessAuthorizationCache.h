/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FBBackgroundStateManaging;
@class CLLocationManager, NSString;

@interface FBLocationAccessAuthorizationCache : NSObject <CLLocationManagerDelegate> {

	unsigned long long _state;
	int _authorizationStatus;
	CLLocationManager* _locationManager;
	id<FBBackgroundStateManaging> _backgroundStateManaging;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startupCompleted;
-(void)performCheck;
-(void)_didEnterInBackground:(id)arg1 ;
-(void)_willEnterInForeground:(id)arg1 ;
-(void)dealloc;
-(int)authorizationStatus;
-(id)initWithSession:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setAuthorizationStatus:(int)arg1 ;
@end
