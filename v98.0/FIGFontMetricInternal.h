/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface FIGFontMetricInternal : NSObject {

	unsigned long long _fontWeight;
	UIColor* _color;
	SCD_Struct_FI588 _fontSizeMetric;

}

@property (nonatomic,readonly) SCD_Struct_FI588 fontSizeMetric;              //@synthesize fontSizeMetric=_fontSizeMetric - In the implementation block
@property (nonatomic,readonly) unsigned long long fontWeight;                //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,readonly) UIColor * color;                              //@synthesize color=_color - In the implementation block
-(id)initWithFontSizeMetric:(SCD_Struct_FI588)arg1 fontWeight:(unsigned long long)arg2 color:(id)arg3 ;
-(SCD_Struct_FI588)fontSizeMetric;
-(UIColor *)color;
-(unsigned long long)fontWeight;
@end

