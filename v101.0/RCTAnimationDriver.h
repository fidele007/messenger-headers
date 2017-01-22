/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, RCTValueAnimatedNode;


@protocol RCTAnimationDriver <NSObject>
@property (nonatomic,readonly) NSNumber * animationId; 
@property (nonatomic,readonly) RCTValueAnimatedNode * valueNode; 
@property (nonatomic,readonly) BOOL animationHasBegun; 
@property (nonatomic,readonly) BOOL animationHasFinished; 
@required
-(id)initWithId:(id)arg1 config:(id)arg2 forNode:(id)arg3 callBack:(/*^block*/id)arg4;
-(void)stepAnimation;
-(NSNumber *)animationId;
-(RCTValueAnimatedNode *)valueNode;
-(BOOL)animationHasBegun;
-(BOOL)animationHasFinished;
-(void)stopAnimation;
-(void)startAnimation;
-(void)removeAnimation;

@end
