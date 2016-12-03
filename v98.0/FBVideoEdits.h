/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)addTrimRange:(SCD_Struct_FB26)arg1 ;
-(id)trimRanges;
-(id)videoProcessorConfig;
-(void)addTrimRange:(SCD_Struct_FB26)arg1 scaleToDuration:(SCD_Struct_FB25)arg2 ;
-(void)clearTrimRanges;
-(void)clearCropRectangle;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filters;
-(void)setCropRectangle:(CGRect)arg1 ;
-(BOOL)isAudioMuted;
-(CGRect)cropRectangle;
-(void)clearFilters;
@end

