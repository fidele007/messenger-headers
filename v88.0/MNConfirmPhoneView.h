/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNFormHeaderViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol MNConfirmPhoneViewDelegate;
@class UIButton, MNFormView, UITableView, MNPhoneNumberCountryFieldCell, MNFormFieldTextFieldCell, UITableViewCell, MNButton, MNConfirmPhoneHeaderView, UIView, MNLoadingIndicator, UIActionSheet, UIGestureRecognizer, LPPhoneNumber, NSString;

@interface MNConfirmPhoneView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, MNFormHeaderViewDelegate, UIActionSheetDelegate> {

	BOOL _inProgress;
	BOOL _shouldUseBigBlueButton;
	id<MNConfirmPhoneViewDelegate> _delegate;
	UIButton* _skipButton;
	MNFormView* _formView;
	UITableView* _tableView;
	MNPhoneNumberCountryFieldCell* _phoneNumberCell;
	MNFormFieldTextFieldCell* _confirmationCodeCell;
	UITableViewCell* _continueButtonCell;
	MNButton* _continueButton;
	MNConfirmPhoneHeaderView* _headerView;
	UIView* _footerView;
	MNLoadingIndicator* _activityIndicator;
	UIActionSheet* _changePhoneActionSheet;
	UIGestureRecognizer* _tapGestureRecoganizer;

}

@property (nonatomic,retain) MNFormView * formView;                                        //@synthesize formView=_formView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MNPhoneNumberCountryFieldCell * phoneNumberCell;              //@synthesize phoneNumberCell=_phoneNumberCell - In the implementation block
@property (nonatomic,retain) MNFormFieldTextFieldCell * confirmationCodeCell;              //@synthesize confirmationCodeCell=_confirmationCodeCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * continueButtonCell;                         //@synthesize continueButtonCell=_continueButtonCell - In the implementation block
@property (nonatomic,retain) MNButton * continueButton;                                    //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) MNConfirmPhoneHeaderView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                          //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                        //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) MNLoadingIndicator * activityIndicator;                       //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIActionSheet * changePhoneActionSheet;                       //@synthesize changePhoneActionSheet=_changePhoneActionSheet - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapGestureRecoganizer;                  //@synthesize tapGestureRecoganizer=_tapGestureRecoganizer - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBigBlueButton;                                  //@synthesize shouldUseBigBlueButton=_shouldUseBigBlueButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNConfirmPhoneViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumber; 
@property (nonatomic,readonly) NSString * confirmationCode; 
@property (assign,nonatomic) BOOL inProgress;                                              //@synthesize inProgress=_inProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)formHeaderViewHideKeyboardButtonTapped:(id)arg1 ;
-(void)_resendCodeButtonPressed;
-(void)_skipThisStepButtonPressed;
-(id)_getConfirmationCodeCell;
-(id)_getContinueCell;
-(void)_onConfirmationCodeChange;
-(void)hideKeyboardIfNecessary;
-(void)setChangePhoneActionSheet:(UIActionSheet *)arg1 ;
-(void)_showChangePhoneNumberActionSheet;
-(void)setTapGestureRecoganizer:(UIGestureRecognizer *)arg1 ;
-(id)initWithCustomContent:(id)arg1 shouldUseBigBlueButton:(BOOL)arg2 ;
-(NSString *)confirmationCode;
-(void)setPhoneNumberCell:(MNPhoneNumberCountryFieldCell *)arg1 ;
-(MNFormFieldTextFieldCell *)confirmationCodeCell;
-(void)setConfirmationCodeCell:(MNFormFieldTextFieldCell *)arg1 ;
-(UIActionSheet *)changePhoneActionSheet;
-(UIGestureRecognizer *)tapGestureRecoganizer;
-(id)_getPhoneNumberCell;
-(void)_continueButtonPressed;
-(void)_setContinueButtonEnabled:(BOOL)arg1 ;
-(MNFormView *)formView;
-(void)setFormView:(MNFormView *)arg1 ;
-(UITableViewCell *)continueButtonCell;
-(void)setContinueButtonCell:(UITableViewCell *)arg1 ;
-(MNButton *)continueButton;
-(void)setContinueButton:(MNButton *)arg1 ;
-(BOOL)shouldUseBigBlueButton;
-(void)setShouldUseBigBlueButton:(BOOL)arg1 ;
-(void)setDelegate:(id<MNConfirmPhoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNConfirmPhoneViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(MNConfirmPhoneHeaderView *)headerView;
-(void)setHeaderView:(MNConfirmPhoneHeaderView *)arg1 ;
-(void)showKeyboard;
-(void)hideKeyboard;
-(LPPhoneNumber *)phoneNumber;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(MNLoadingIndicator *)activityIndicator;
-(void)setActivityIndicator:(MNLoadingIndicator *)arg1 ;
-(MNPhoneNumberCountryFieldCell *)phoneNumberCell;
-(void)_updateLoadingIndicator;
-(void)_hideKeyboard;
-(void)setPhoneNumber:(LPPhoneNumber *)arg1 ;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end
