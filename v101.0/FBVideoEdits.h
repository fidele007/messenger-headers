/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface FBVideoEdits : NSObject <NSCopying> {

	NSMutableDictionary* _data;

}
+(id)editsFromVideoAssetEdits:(id)arg1 ;
-(void)addFilterWithName:(id)arg1 withParameters:(id)arg2 ;
-(void)addImageOverlayFilter:(id)arg1 ;
-(void)setMuteAudio:(BOOL)arg1 ;
-(void)addTrimRange:(SCD_Struct_FB34)arg1 ;
-(id)trimRanges;
-(id)videoProcessorConfig;
-(void)addTrimRange:(SCD_Struct_FB34)arg1 scaleToDuration:(SCD_Struct_FB33)arg2 ;
-(void)clearTrimRanges;
-(void)clearCropRectangle;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filters;
-(void)setCropRectangle:(CGRect)arg1 ;
-(BOOL)isAudioMuted;
-(long long)framerate;
-(void)setFramerate:(long long)arg1 ;
-(CGRect)cropRectangle;
-(void)clearFilters;
@end

