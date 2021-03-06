/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNExpandableLabelDelegate;
@class FBRichTextView, MNExpandableLabelConfiguration, NSString, NSAttributedString;

@interface MNExpandableLabel : UIView {

	FBRichTextView* _mainLabel;
	MNExpandableLabelConfiguration* _labelConfiguration;
	id<MNExpandableLabelDelegate> _delegate;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) MNExpandableLabelConfiguration * labelConfiguration;              //@synthesize labelConfiguration=_labelConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<MNExpandableLabelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeWithText:(id)arg1 constrainedToSize:(CGSize)arg2 labelConfiguration:(id)arg3 ;
+(CGSize)sizeWithAttributedText:(id)arg1 constrainedToSize:(CGSize)arg2 labelConfiguration:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 initialConfiguration:(id)arg2 ;
-(void)setLabelConfiguration:(MNExpandableLabelConfiguration *)arg1 ;
-(void)_configureWithNewConfiguration:(id)arg1 ;
-(void)didTapTruncationText;
-(CGSize)_minimumSizeOfMainLabel;
-(void)_layoutMainLabel;
-(CGSize)_intrinsicSizeOfMainLabel;
-(CGSize)_sizeOfMainLabelWithNumberOfLines:(long long)arg1 ;
-(void)_expandMainLabel;
-(BOOL)_attributedTextRequiresExpansion;
-(MNExpandableLabelConfiguration *)labelConfiguration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNExpandableLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNExpandableLabelDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
@end

