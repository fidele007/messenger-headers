/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBDrawableShapeProtocol;
@class NSString;

@interface FBDrawnShapeView : UIView {

	NSString* _name;
	id<FBDrawableShapeProtocol> _drawnShape;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id<FBDrawableShapeProtocol> drawnShape;              //@synthesize drawnShape=_drawnShape - In the implementation block
+(Class)layerClass;
-(id)viewNamed:(id)arg1 ;
-(void)setDrawnShape:(id<FBDrawableShapeProtocol>)arg1 ;
-(void)_updateDrawnShape:(id)arg1 ;
-(id<FBDrawableShapeProtocol>)drawnShape;
-(void)setNeedsDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
