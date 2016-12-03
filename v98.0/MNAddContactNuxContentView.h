/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBRichTextView, MNAddContactNuxReasonsView, MNProfileImageView, NSString;

@interface MNAddContactNuxContentView : UIView {

	UIImageView* _profileMaskImageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	MNAddContactNuxReasonsView* _reasonsView;
	MNProfileImageView* _profileImageView;

}

@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,readonly) MNProfileImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
-(MNProfileImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
@end
