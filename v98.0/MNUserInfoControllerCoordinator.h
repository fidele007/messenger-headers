/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNUserInfoController, NSString;

@interface MNUserInfoControllerCoordinator : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _userInfoControllerProvider;
	MNUserInfoController* _userInfoController;

}

@property (nonatomic,retain) MNUserInfoController * userInfoController;              //@synthesize userInfoController=_userInfoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentUserInfoSheetWithConfiguration:(id)arg1 inView:(id)arg2 sourceView:(id)arg3 ;
-(MNUserInfoController *)userInfoController;
-(void)setUserInfoController:(MNUserInfoController *)arg1 ;
@end

