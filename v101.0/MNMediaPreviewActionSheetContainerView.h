/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, UILabel, UIView, UIButton;

@interface MNMediaPreviewActionSheetContainerView : UIView {

	NSArray* _accessibilityElements;
	UILabel* _titleLabel;
	UIView* _previewView;
	UIButton* _sendButton;
	UIButton* _editButton;
	UIButton* _cancelButton;

}
-(void)_updateAccessibilityElements;
-(id)initWithSendButton:(id)arg1 editButton:(id)arg2 cancelButton:(id)arg3 ;
-(void)setTitleLabel:(id)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)setPreviewView:(id)arg1 ;
@end
