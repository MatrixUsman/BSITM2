package com.usman.pftsqlite;
import android.content.Context;
import android.graphics.Color;

import com.github.mikephil.charting.charts.PieChart;
import com.github.mikephil.charting.components.Description;
import com.github.mikephil.charting.data.PieData;
import com.github.mikephil.charting.data.PieDataSet;
import com.github.mikephil.charting.data.PieEntry;
import com.github.mikephil.charting.formatter.ValueFormatter;
import com.github.mikephil.charting.utils.ColorTemplate;

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;

public class ChartUtils {

    public static void displayPieChart(Context context, PieChart pieChart, List<String> labels, List<Float> values) {
        List<PieEntry> pieEntries = new ArrayList<>();
        for (int i = 0; i < values.size(); i++) {
            pieEntries.add(new PieEntry(values.get(i), labels.get(i)));
        }

        PieDataSet dataSet = new PieDataSet(pieEntries, "");
        dataSet.setColors(ColorTemplate.COLORFUL_COLORS);
        dataSet.setValueTextColor(Color.WHITE);
        dataSet.setValueTextSize(12f);

        PieData data = new PieData(dataSet);
        data.setValueFormatter(new DecimalValueFormatter());

        pieChart.setData(data);

        Description description = new Description();
        description.setText("");
        pieChart.setDescription(description);

        pieChart.animateY(1000);
        pieChart.setDrawEntryLabels(false);
        pieChart.setDrawHoleEnabled(true);
        pieChart.setHoleColor(Color.TRANSPARENT);
        pieChart.setTransparentCircleRadius(58f);
        pieChart.setTransparentCircleAlpha(0);

        pieChart.invalidate();
    }

    private static class DecimalValueFormatter extends ValueFormatter {

        private DecimalFormat decimalFormat;

        public DecimalValueFormatter() {
            decimalFormat = new DecimalFormat("#.##");
        }

        @Override
        public String getFormattedValue(float value) {
            return decimalFormat.format(value);
        }
    }
}
