/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBStickerResourceTypeConfigProvider : NSObject {

	NSArray* _resourceConfigs;

}
-(id)configForResourceType:(unsigned long long)arg1 ;
-(BOOL)isPreloadedFbId:(unsigned long long)arg1 resourceType:(unsigned long long)arg2 ;
-(void)_initConfigs;
-(id)init;
@end

