/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class NSString, NSMutableDictionary;

@interface FBAccessibleButton : UIButton {

	NSString* _fallbackAccessibilityLabel;
	NSMutableDictionary* _accessibilityLabels;
	NSString* _fallbackAccessibilityHint;
	NSMutableDictionary* _accessibilityHints;

}

@property (nonatomic,retain) NSString * fallbackAccessibilityLabel;                  //@synthesize fallbackAccessibilityLabel=_fallbackAccessibilityLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessibilityLabels;              //@synthesize accessibilityLabels=_accessibilityLabels - In the implementation block
@property (nonatomic,retain) NSString * fallbackAccessibilityHint;                   //@synthesize fallbackAccessibilityHint=_fallbackAccessibilityHint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessibilityHints;               //@synthesize accessibilityHints=_accessibilityHints - In the implementation block
-(void)setAccessibilityHint:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setFallbackAccessibilityLabel:(NSString *)arg1 ;
-(NSMutableDictionary *)accessibilityLabels;
-(NSMutableDictionary *)accessibilityHints;
-(void)setFallbackAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityLabel:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSString *)fallbackAccessibilityLabel;
-(void)setAccessibilityLabels:(NSMutableDictionary *)arg1 ;
-(NSString *)fallbackAccessibilityHint;
-(void)setAccessibilityHints:(NSMutableDictionary *)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityHint:(id)arg1 ;
@end

