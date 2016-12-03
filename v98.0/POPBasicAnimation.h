/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/POPPropertyAnimation.h>

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
+(id)linearAnimation;
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)easeInAnimation;
+(id)defaultAnimation;
+(id)easeInEaseOutAnimation;
+(id)easeOutAnimation;
+(id)animation;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)init;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

