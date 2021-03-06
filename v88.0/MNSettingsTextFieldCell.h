/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MNSettingsTextFieldCellDelegate;
@class UIView, UITextField, NSString;

@interface MNSettingsTextFieldCell : UITableViewCell <UITextFieldDelegate> {

	UIView* _lineSeparator;
	UIView* _topSeparator;
	id<MNSettingsTextFieldCellDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                          //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<MNSettingsTextFieldCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MNSettingsTextFieldCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MNSettingsTextFieldCellDelegate>)delegate;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end

