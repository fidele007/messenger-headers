/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNContactSyncControllerStatusListener.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol MNContactSyncCellControllerDelegate;
@class MNContactSyncCellControllerInjector, MNAddressBook, UIActionSheet, UIAlertView, MNAccumulatedImportedContactsListDisplayer, FBLazyCreator, NSDate, UIView, NSString;

@interface MNContactSyncCellController : NSObject <FBClassInjectable, MNContactSyncControllerStatusListener, UIActionSheetDelegate, UIAlertViewDelegate> {

	MNContactSyncCellControllerInjector* _injector;
	MNAddressBook* _addressBook;
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
-(id)initWithInjector:(id)arg1 ;
-(void)contactSyncControllerDidChangeStatus:(id)arg1 ;
-(void)_logSMSBridgeAwarenessAction:(id)arg1 forSurface:(unsigned long long)arg2 ;
-(void)_showContactSyncActivationActionSheetFromSourceView:(id)arg1 ;
-(BOOL)_shouldShowContactsSyncCellInPeopleTab;
-(BOOL)_shouldShowContactsSyncCellInNewThreadView;
-(void)_initiateContactImporting;
-(void)_presentLearnMoreURL;
-(void)_contactSyncCellControllerCellNeedsUpdate;
-(void)_presentPermissionDeniedAlertView;
-(void)setupContactSyncTableViewCell:(id)arg1 ;
-(void)syncContactsCellWillAppear:(id)arg1 inSurface:(unsigned long long)arg2 ;
-(void)syncContactsCellTapped:(id)arg1 presentingView:(id)arg2 surface:(unsigned long long)arg3 ;
-(BOOL)shouldShowContactsSyncCellInSurface:(unsigned long long)arg1 ;
-(UIView *)actionSheetPresenter;
-(void)setActionSheetPresenter:(UIView *)arg1 ;
-(void)setDelegate:(id<MNContactSyncCellControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactSyncCellControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

