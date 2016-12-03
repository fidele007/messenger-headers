/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoTagSuggestionModelOperation <NSObject>
@required
-(void)saveNamedFaces:(id)arg1 withAssetID:(id)arg2 suggestionLoaded:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)loadStoredFaceFeatures:(BOOL)arg1 andTags:(BOOL)arg2 withAssetID:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)setSuggesionsLoadedValue:(unsigned long long)arg1 forAsset:(id)arg2;
-(void)setLoadedFaceboxesTagSuggestions:(id)arg1 forAsset:(id)arg2;
-(void)clearPhotoAssetsForAssetIDs:(id)arg1;

@end
