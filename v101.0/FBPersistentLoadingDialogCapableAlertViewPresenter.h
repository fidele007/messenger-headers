/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPersistentLoadingDialogCapableAlertViewPresenter : NSObject {

	NSString* _loadingDialogTitle;
	unsigned long long _loadingDialogToken;
	unsigned long long _presentedDialogToken;
	BOOL _showsPersistentLoadingDialog;

}

@property (assign,nonatomic) BOOL showsPersistentLoadingDialog;              //@synthesize showsPersistentLoadingDialog=_showsPersistentLoadingDialog - In the implementation block
-(void)showAlertViewWithTitle:(id)arg1 message:(id)arg2 configuration:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 ;
-(id)initWithLoadingDialogTitle:(id)arg1 ;
-(void)setShowsPersistentLoadingDialog:(BOOL)arg1 ;
-(BOOL)showsPersistentLoadingDialog;
-(void)_dismissLoadingDialogIfNecessary;
-(void)_presentLoadingDialogIfNecessary;
@end
