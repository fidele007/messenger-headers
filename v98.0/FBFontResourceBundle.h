/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBFontManager, NSArray;

@interface FBFontResourceBundle : NSObject {

	BOOL _didDestroy;
	NSString* _identifier;
	FBFontManager* _fontManager;
	NSArray* _fontResourceHandles;

}

@property (nonatomic,copy,readonly) NSArray * fontResourceHandles;              //@synthesize fontResourceHandles=_fontResourceHandles - In the implementation block
-(id)initWithFontManager:(id)arg1 fontResourceHandles:(id)arg2 identifier:(id)arg3 ;
-(void)destroyResources;
-(NSArray *)fontResourceHandles;
-(void)dealloc;
@end

