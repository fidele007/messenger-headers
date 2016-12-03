/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class NSString;

@interface MNAccountSwitchingPresentationCoordinator : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _navigationCoordinatorProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinatorProvider:(id)arg1 ;
-(void)presentAccountViewControllerAndSwitchToAccountWithFBID:(id)arg1 withAccountSwitchingRequestSource:(id)arg2 ;
-(id)_presentAndReturnSettingsViewController;
@end

