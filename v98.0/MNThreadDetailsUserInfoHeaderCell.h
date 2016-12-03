/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MNThreadDetailsUserInfoHeaderCellDelegate;
@class MNTableViewCellStyle, MNProfileImageView, MNMaskedProfileImageView, UILabel, UIView, MNTextField, NSString;

@interface MNThreadDetailsUserInfoHeaderCell : UITableViewCell <UITextFieldDelegate> {

	MNTableViewCellStyle* _cellStyle;
	MNProfileImageView* _profileImageView;
	MNMaskedProfileImageView* _profilePhotoMaskImageView;
	UILabel* _titleLabel;
	UILabel* _activityStatusLabel;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	MNTextField* _editThreadNameTextField;
	NSString* _modifiedThreadName;
	NSString* _defaultThreadName;
	id<MNThreadDetailsUserInfoHeaderCellDelegate> _delegate;

}

@property (nonatomic,readonly) MNProfileImageView * profileImageView;                                    //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadDetailsUserInfoHeaderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNProfileImageView *)profileImageView;
-(void)_layoutSeparators;
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 avatarImageDecoration:(id)arg3 ;
-(void)configureForConversationContact:(id)arg1 ;
-(void)setTitleLabelString:(id)arg1 ;
-(void)setActivityStatusLabelString:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)_updateCellBasedOnHighlightState;
-(void)_layoutProfilePhoto;
-(void)setEditableDefaultThreadNameText:(id)arg1 ;
-(id)editedThreadName;
-(void)threadNameChanged:(id)arg1 ;
-(void)_switchToEditMode;
-(void)_switchToReadMode;
-(void)_setAttributedStringForEditThreadNameTextField;
-(void)_setProfileImageViewMaskTypeForConversationPerson:(id)arg1 ;
-(BOOL)_isEditing;
-(void)setDelegate:(id<MNThreadDetailsUserInfoHeaderCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNThreadDetailsUserInfoHeaderCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_layoutLabels;
@end

