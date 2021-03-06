/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNSearchBar.h>

@protocol MNSearchBarDelegate;
@class NSString, UIColor, UITextField, UIButton, UIView;

@interface MNSearchBarView : UIView <UITextFieldDelegate, MNSearchBar> {

	UIButton* _actionButton;
	UIView* _textFieldLeftView;
	id<MNSearchBarDelegate> _searchBarDelegate;
	UITextField* _textField;
	double _topOutset;
	UIEdgeInsets _contentInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActionButtonHidden,nonatomic) BOOL actionButtonHidden; 
@property (nonatomic,copy) NSString * actionButtonTitle; 
@property (nonatomic,copy) UIColor * actionButtonTitleColor; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic,__weak) id<MNSearchBarDelegate> searchBarDelegate;                 //@synthesize searchBarDelegate=_searchBarDelegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double topOutset;                                                 //@synthesize topOutset=_topOutset - In the implementation block
-(BOOL)isActionButtonHidden;
-(void)setActionButtonHidden:(BOOL)arg1 ;
-(void)setActionButtonTitleColor:(UIColor *)arg1 ;
-(UIColor *)actionButtonTitleColor;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UITextField *)textField;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)placeholder;
-(void)_textDidChange:(id)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(void)_handleActionButton:(id)arg1 ;
-(NSString *)actionButtonTitle;
-(id<MNSearchBarDelegate>)searchBarDelegate;
-(void)setSearchBarDelegate:(id<MNSearchBarDelegate>)arg1 ;
-(double)topOutset;
-(void)setTopOutset:(double)arg1 ;
@end

