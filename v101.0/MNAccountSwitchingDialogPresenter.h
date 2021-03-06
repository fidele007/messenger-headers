/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPersistentLoadingDialogCapableAlertViewPresenter;

@interface MNAccountSwitchingDialogPresenter : NSObject {

	FBPersistentLoadingDialogCapableAlertViewPresenter* _persistentLoadingDialogAlertViewPresenter;

}

@property (assign,nonatomic) BOOL showsPersistentLoadingDialog; 
-(void)setShowsPersistentLoadingDialog:(BOOL)arg1 ;
-(BOOL)showsPersistentLoadingDialog;
-(void)presentAddAccountDialogWithDidProvideUsernameAndPasswordBlock:(/*^block*/id)arg1 didCancelBlock:(/*^block*/id)arg2 ;
-(void)_presentRequiredTextFieldLeftEmptyWarningDialogWithDismissedBlock:(/*^block*/id)arg1 ;
-(void)presentLoginApprovalCodeDialogWithDidProvideLoginApprovalCodeBlock:(/*^block*/id)arg1 didCancelBlock:(/*^block*/id)arg2 ;
-(void)presentPasswordDialogWithAccountDisplayName:(id)arg1 didProvidePasswordBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)presentAccountSwitchingErrorDialogWithError:(id)arg1 ;
-(void)presentUnableToSwitchToLoggedInAccountErrorDialog;
-(void)presentAccountSwitchingConfirmationDialogWithAccountDisplayName:(id)arg1 didConfirmBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)presentAccountRemovalConfirmationDialogWithAccountDisplayName:(id)arg1 didConfirmBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)presentRequirePasswordForNextLoginConfirmationDialogWithDidRequirePasswordForNextLoginBlock:(/*^block*/id)arg1 didChoosePasswordlessLoginBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

