/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide;

@interface FBInlineAdHeaderNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;
	BOOL _hasChevronButton;

}

@property (nonatomic,readonly) BOOL hasChevronButton;                                  //@synthesize hasChevronButton=_hasChevronButton - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* sponsoredLabelTextMetrics; 
@property (nonatomic,readonly) double sponsoredLabelTopSpacing; 
@property (nonatomic,readonly) double sponsoredLabelBottomSpacing; 
@property (nonatomic,readonly) CGSize maxChevronButtonSize; 
@property (nonatomic,readonly) UIEdgeInsets chevronButtonTapTargetInsets; 
-(id)initWithHasChevronButton:(BOOL)arg1 interfaceGuide:(id)arg2 ;
-(CGSize)calculateNodeSizeWithConstrainingSize:(CGSize)arg1 ;
-(FBTextMetrics*)sponsoredLabelTextMetrics;
-(BOOL)hasChevronButton;
-(UIEdgeInsets)chevronButtonTapTargetInsets;
-(double)sponsoredLabelTopSpacing;
-(CGSize)maxChevronButtonSize;
-(double)sponsoredLabelBottomSpacing;
@end
