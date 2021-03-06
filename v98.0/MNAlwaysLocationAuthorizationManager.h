/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol MNAlwaysLocationAuthorizationManagerDelegate;
@class CLLocationManager, NSString;

@interface MNAlwaysLocationAuthorizationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	id<MNAlwaysLocationAuthorizationManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAlwaysLocationAuthorizationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasAlwaysLocationAuthorization;
+(BOOL)willDisplaySystemPromptWhenRequestingAlwaysLocationAuthorization;
+(BOOL)hasGrantedOrDeniedAlwaysLocationAuthorization;
-(void)requestAlwaysLocationAuthorization;
-(void)setDelegate:(id<MNAlwaysLocationAuthorizationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAlwaysLocationAuthorizationManagerDelegate>)delegate;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end

