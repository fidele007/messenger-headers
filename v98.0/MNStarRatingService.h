/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStarRatingsServiceDelegate.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

@class MNNavigationCoordinator, UIWindow, FBStarRatingsService, FBUserSession, NSString;

@interface MNStarRatingService : NSObject <FBStarRatingsServiceDelegate, MNServiceControllable, FBClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;
	UIWindow* _window;
	FBStarRatingsService* _service;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 window:(id)arg3 ;
-(BOOL)starRatingsServiceCanDisplay:(id)arg1 ;
-(id)starRatingsServiceCurrentWindow:(id)arg1 ;
-(id)starRatingsServiceAppDisplayName:(id)arg1 ;
-(id)starRatingsServiceAppID:(id)arg1 ;
-(void)starRatingsServiceWillAppear:(id)arg1 ;
-(void)starRatingsServiceDidDisappear:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

