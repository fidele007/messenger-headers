/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNFileAttachmentViewModel, UIFont, UIColor;

@interface MNMessageAttachmentCell : UITableViewCell {

	MNFileAttachmentViewModel* _attachment;
	UIFont* _textFont;
	UIColor* _textColor;

}

@property (nonatomic,copy) MNFileAttachmentViewModel * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy) UIFont * textFont;                                   //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
-(void)setTextFont:(UIFont *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(UIColor *)textColor;
-(UIFont *)textFont;
-(void)setAttachment:(MNFileAttachmentViewModel *)arg1 ;
-(MNFileAttachmentViewModel *)attachment;
@end

