/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBAuthHeaderContentFooterView : UIView {

	BOOL _shouldFloatFooter;
	UIView* _header;
	UIView* _content;
	UIView* _footer;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (nonatomic,readonly) UIView * header;                           //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) UIView * content;                          //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) UIView * footer;                           //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumEdgeInsets;              //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatFooter;                      //@synthesize shouldFloatFooter=_shouldFloatFooter - In the implementation block
-(void)setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(void)setShouldFloatFooter:(BOOL)arg1 ;
-(BOOL)shouldFloatFooter;
-(id)initWithHeader:(id)arg1 content:(id)arg2 footer:(id)arg3 ;
-(void)layoutSubviews;
-(UIView *)content;
-(UIView *)header;
-(UIView *)footer;
@end

