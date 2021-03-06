/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@protocol MNFamilyAppNavigationViewModelUpdaterDelegate;
@class MNFamilyAppNavigationViewModelUpdaterInjector, MNFamilyAppNavigationViewModel, NSString, NSNumber;

@interface MNFamilyAppNavigationViewModelUpdater : NSObject <FBClassInjectable> {

	MNFamilyAppNavigationViewModelUpdaterInjector* _injector;
	MNFamilyAppNavigationViewModel* _familyAppNavigationViewModel;
	id<MNFamilyAppNavigationViewModelUpdaterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNFamilyAppNavigationViewModelUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNFamilyAppNavigationViewModel * familyAppNavigationViewModel; 
@property (nonatomic,readonly) NSNumber * notificationsCount; 
+(Class)injectorClass;
-(MNFamilyAppNavigationViewModel *)familyAppNavigationViewModel;
-(void)setFamilyAppNavigationViewModel:(MNFamilyAppNavigationViewModel *)arg1 ;
-(void)_updateFamilyAppNavigationViewModel;
-(BOOL)_isTheSameUser;
-(void)_didUpdateWithFamilyAppNavigationViewModel:(id)arg1 ;
-(BOOL)_shouldUpdateFamilyAppNavigationViewModel;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNFamilyAppNavigationViewModelUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFamilyAppNavigationViewModelUpdaterDelegate>)delegate;
-(NSNumber *)notificationsCount;
@end

