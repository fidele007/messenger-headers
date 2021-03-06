/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNavigationListener.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

@class MNNavigationCoordinator, NSString;

@interface MNInternalStarRatingCoordinator : NSObject <MNNavigationListener, MNServiceControllable, FBClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4 ;
-(void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)initWithNavigationCoordinator:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

