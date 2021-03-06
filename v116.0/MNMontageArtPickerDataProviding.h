/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageArtPickerDataProviding <NSObject>
@required
-(id)fetchArtSectionsWithLogger:(id)arg1 sectionsLimit:(unsigned long long)arg2 sectionUnitsLimit:(unsigned long long)arg3 sectionsAfterCursor:(id)arg4 completion:(/*^block*/id)arg5;
-(id)fetchArtSectionsWithLogger:(id)arg1 sectionsLimit:(unsigned long long)arg2 sectionUnitsLimit:(unsigned long long)arg3 sectionsAfterCursor:(id)arg4 withSupportedFeatures:(id)arg5 forArtInterface:(id)arg6 withSupportedIntents:(id)arg7 completion:(/*^block*/id)arg8;
-(id)fetchArtSectionsWithSearchTerm:(id)arg1 searchMode:(id)arg2 sectionsLimit:(unsigned long long)arg3 sectionUnitsLimit:(unsigned long long)arg4 sectionsAfterCursor:(id)arg5 logger:(id)arg6 completion:(/*^block*/id)arg7;
-(id)fetchArtSectionPageWithId:(id)arg1 searchTerm:(id)arg2 sectionUnitsLimit:(unsigned long long)arg3 afterCursor:(id)arg4 orderToken:(id)arg5 completion:(/*^block*/id)arg6;
-(id)fetchFrameItemsForComposition:(id)arg1 fromSection:(id)arg2 completion:(/*^block*/id)arg3;
-(id)fetchFeaturedSectionUnit:(id)arg1 fromSection:(id)arg2 completion:(/*^block*/id)arg3;
-(id)fetchFeaturedSectionWithLogger:(id)arg1 includeFeaturedCamera:(BOOL)arg2 sectionUnitsLimit:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)setThumbnailWidthInPoints:(long long)arg1;

@end

