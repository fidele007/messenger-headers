/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAsyncLayer.h>

@class FBQuickButtonStateContents, UIFont;

@interface FBQuickButtonAsyncTitleLabelLayer : FBAsyncLayer {

	FBQuickButtonStateContents* _stateContents;
	UIFont* _titleFont;
	CGRect _textBoundingRect;

}

@property (nonatomic,retain) FBQuickButtonStateContents * stateContents;              //@synthesize stateContents=_stateContents - In the implementation block
@property (assign,nonatomic) CGRect textBoundingRect;                                 //@synthesize textBoundingRect=_textBoundingRect - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                      //@synthesize titleFont=_titleFont - In the implementation block
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
-(void)setStateContents:(FBQuickButtonStateContents *)arg1 ;
-(void)setTextBoundingRect:(CGRect)arg1 ;
-(FBQuickButtonStateContents *)stateContents;
-(CGRect)textBoundingRect;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
@end

