/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKAsyncLayer.h>

@class CKTextComponentLayerHighlighter, CKTextKitRenderer;

@interface CKTextComponentLayer : CKAsyncLayer {

	CKTextComponentLayerHighlighter* _highlighter;
	CKTextKitRenderer* _renderer;

}

@property (nonatomic,retain) CKTextKitRenderer * renderer;                                 //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) CKTextComponentLayerHighlighter * highlighter; 
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)defaultValueForKey:(id)arg1 ;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(CKTextComponentLayerHighlighter *)highlighter;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(CKTextKitRenderer *)renderer;
@end

