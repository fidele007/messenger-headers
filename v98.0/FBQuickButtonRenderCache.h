/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary;

@interface FBQuickButtonRenderCache : NSObject {

	NSMutableDictionary* _cache;

}
+(id)sharedCache;
-(id)cachedImageForStateContents:(id)arg1 boundingRect:(CGRect)arg2 font:(id)arg3 ;
-(void)cacheImage:(id)arg1 forStateContents:(id)arg2 boundingRect:(CGRect)arg3 font:(id)arg4 ;
-(id)itemWithStateContents:(id)arg1 boundingRect:(CGRect)arg2 font:(id)arg3 ;
-(id)init;
@end

