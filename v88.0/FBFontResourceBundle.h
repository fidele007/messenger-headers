/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

