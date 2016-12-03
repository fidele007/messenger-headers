/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface FBCollageItem : NSObject <NSCopying> {

	UIView* _view;
	CGRect _rect;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGRect rect;                //@synthesize rect=_rect - In the implementation block
+(id)collageItemWithRect:(CGRect)arg1 ;
-(id)initWithView:(id)arg1 rect:(CGRect)arg2 ;
-(CGRect)frameForXRatio:(double)arg1 yRatio:(double)arg2 ;
-(id)description;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
@end

