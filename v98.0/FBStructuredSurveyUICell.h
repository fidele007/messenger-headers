/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class CALayer, UIColor, FBStructuredSurveyUIStyleSheet, FBStructuredSurveyUIConfig;

@interface FBStructuredSurveyUICell : UITableViewCell {

	CALayer* _separatorLayer;
	double _separatorLineHeight;
	UIColor* _separatorLineColor;
	FBStructuredSurveyUIStyleSheet* _styleSheet;
	FBStructuredSurveyUIConfig* _config;

}

@property (assign,nonatomic) double separatorLineHeight;                               //@synthesize separatorLineHeight=_separatorLineHeight - In the implementation block
@property (nonatomic,retain) UIColor * separatorLineColor;                             //@synthesize separatorLineColor=_separatorLineColor - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyUIStyleSheet * styleSheet;              //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyUIConfig * config;                      //@synthesize config=_config - In the implementation block
+(double)_topPaddingForStyleSheet:(id)arg1 ;
+(double)_bottomPaddingForStyleSheet:(id)arg1 ;
+(double)heightForModelObject:(id)arg1 context:(id)arg2 frame:(CGRect)arg3 styleSheet:(id)arg4 config:(id)arg5 ;
-(double)_cellContentHeight;
-(void)setStyleSheet:(FBStructuredSurveyUIStyleSheet *)arg1 ;
-(void)_layoutCellForFrame:(CGRect)arg1 ;
-(void)_configureSeparatorLine;
-(void)configureWithModelObject:(id)arg1 context:(id)arg2 ;
-(BOOL)_isButtonLike;
-(double)separatorLineHeight;
-(void)setSeparatorLineHeight:(double)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(FBStructuredSurveyUIConfig *)config;
-(unsigned long long)accessibilityTraits;
-(BOOL)_isChecked;
-(void)setConfig:(FBStructuredSurveyUIConfig *)arg1 ;
-(UIColor *)separatorLineColor;
-(void)setSeparatorLineColor:(UIColor *)arg1 ;
-(FBStructuredSurveyUIStyleSheet *)styleSheet;
@end
