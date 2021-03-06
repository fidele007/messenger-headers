/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, FBPaymentsImage, NSString;

@interface MNPaymentsSaleItemViewModel : FBValueObject <NSCopying> {

	BOOL _shouldDisplayDismissButton;
	NSAttributedString* _itemViewTitle;
	FBPaymentsImage* _itemImage;
	unsigned long long _placeholderImageGlyphName;
	NSString* _subtitleText;
	unsigned long long _subtitleGlyphName;

}

@property (nonatomic,copy,readonly) NSAttributedString * itemViewTitle;                   //@synthesize itemViewTitle=_itemViewTitle - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsImage * itemImage;                          //@synthesize itemImage=_itemImage - In the implementation block
@property (nonatomic,readonly) unsigned long long placeholderImageGlyphName;              //@synthesize placeholderImageGlyphName=_placeholderImageGlyphName - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;                              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,readonly) unsigned long long subtitleGlyphName;                      //@synthesize subtitleGlyphName=_subtitleGlyphName - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayDismissButton;                           //@synthesize shouldDisplayDismissButton=_shouldDisplayDismissButton - In the implementation block
-(id)initWithItemViewTitle:(id)arg1 itemImage:(id)arg2 placeholderImageGlyphName:(unsigned long long)arg3 subtitleText:(id)arg4 subtitleGlyphName:(unsigned long long)arg5 shouldDisplayDismissButton:(BOOL)arg6 ;
-(NSAttributedString *)itemViewTitle;
-(unsigned long long)placeholderImageGlyphName;
-(unsigned long long)subtitleGlyphName;
-(BOOL)shouldDisplayDismissButton;
-(NSString *)subtitleText;
-(FBPaymentsImage *)itemImage;
@end

