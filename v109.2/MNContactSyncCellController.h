/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNContactSyncControllerStatusListener.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol MNContactSyncCellControllerDelegate;
@class MNContactSyncCellControllerInjector, UIActionSheet, UIAlertView, MNAccumulatedImportedContactsListDisplayer, FBLazyCreator, NSDate, UIView, NSString;

@interface MNContactSyncCellController : NSObject <FBClassInjectable, MNContactSyncControllerStatusListener, UIActionSheetDelegate, UIAlertViewDelegate> {

	MNContactSyncCellControllerInjector* _injector;
	UIActionSheet* _contactSyncActivationActionSheet;
	UIAlertView* _settingsAlertView;
	MNAccumulatedImportedContactsListDisplayer* _contactsListDisplayer;
	FBLazyCreator* _importedContactsListPresenterCreator;
	unsigned long long _userInitiatedImportResultsSeen;
	unsigned long long _presentedSurface;
	NSDate* _lastCellAppearanceLogTime;
	id<MNContactSyncCellControllerDelegate> _delegate;
	UIView* _actionSheetPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNContactSyncCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * actionSheetPresenter;                                        //@synthesize actionSheetPresenter=_actionSheetPresenter - In the implementation block
+(Class)injectorClass;
-(void)_logSMSBridgeAwarenessAction:(id)arg1 forSurface:(unsigned long long)arg2 ;
-(void)_showContactSyncActivationActionSheetFromSourceView:(id)arg1 ;
-(BOOL)_shouldShowContactsSyncCellInPeopleTab;
-(BOOL)_shouldShowContactsSyncCellInNewThreadView;
-(void)_presentLearnMoreURL;
-(void)_contactSyncCellControllerCellNeedsUpdate;
-(void)_presentPermissionDeniedAlertView;
-(void)contactSyncControllerDidChangeStatus:(id)arg1 ;
-(void)setupContactSyncTableViewCell:(id)arg1 ;
-(void)syncContactsCellWillAppear:(id)arg1 inSurface:(unsigned long long)arg2 ;
-(void)syncContactsCellTapped:(id)arg1 presentingView:(id)arg2 surface:(unsigned long long)arg3 ;
-(BOOL)shouldShowContactsSyncCellInSurface:(unsigned long long)arg1 ;
-(UIView *)actionSheetPresenter;
-(void)setActionSheetPresenter:(UIView *)arg1 ;
-(void)_initiateContactImporting;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNContactSyncCellControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactSyncCellControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

