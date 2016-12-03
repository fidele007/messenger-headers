/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class IGSurface, IGRenderer;

@interface IGSurfaceView : UIView {

	IGSurface* _surface;
	IGRenderer* _renderer;

}

@property (nonatomic,retain) IGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) IGSurface * surface; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(IGRenderer *)renderer;
-(IGSurface *)surface;
@end

