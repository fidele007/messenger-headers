/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CKTextComponentLayer, CKHighlightOverlayLayer;

@interface CKTextComponentLayerHighlighter : NSObject {

	CKTextComponentLayer* _textComponentLayer;
	CKHighlightOverlayLayer* _highlightOverlayLayer;
	NSRange _highlightedRange;

}

@property (assign,nonatomic) NSRange highlightedRange;              //@synthesize highlightedRange=_highlightedRange - In the implementation block
-(void)setHighlightedRange:(NSRange)arg1 ;
-(NSRange)highlightedRange;
-(id)initWithTextComponentLayer:(id)arg1 ;
-(void)layoutHighlight;
@end

